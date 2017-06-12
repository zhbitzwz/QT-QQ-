<?php
/**
 * author     : ZWZ
 * createTime : 2017/6/6 7:05
 * description:Controller层
 */
$action = "";
if (isset($_REQUEST['action']))
    $action = $_REQUEST['action'];
//$action = $_POST['action'];
include_once('qqOperator.class.php');
$qqOpreator = new qqOperator();
switch ($action) {
    case "login":
        $userInfo = $qqOpreator->loginUser($_REQUEST['account'], $_REQUEST['password']);
        //var_dump($userInfo);
	foreach ($userInfo as $value) {
            $msg = $value['uid'] . "#" . $value['account'] . "#" .$value['nickname'] . "#" . $value['reg_time'];
            if($value['account'] != $_REQUEST['account'] || $value['password'] != $_REQUEST['password']) {
            	echo "0#account or pawd not ture";
            	exit();
	    }
	}
        if ($msg == null) {
            echo "0#login failure";
            exit();
        } else {
            echo "1#" . $msg;
            exit();
        }
        break;
    case "reg":
        $account = $_REQUEST['account'];
        $nickname = $_REQUEST['nickname'];
        $userAllInfo = $qqOpreator->getTableInfo("users");
        foreach ($userAllInfo as $value) {
            if ($value['account'] == $account || $value['nickname'] == $nickname) {
                echo "0#account or nickname exit";
                exit();
            }
        }
        if ($resultUid = $qqOpreator->regUser($account, $_REQUEST['password'], $nickname)) {
            echo "1#" . $resultUid;
        } else {
            echo "0#reg failure";
        }
        break;
    case "listfriend":
        $friend = $qqOpreator->findFriendID($_REQUEST['uid']);
	if(!$friend) {
	    echo "0";
	    exit();
	}

        foreach ($friend as $value) {
            $friendInfo[] = $qqOpreator->userInfo($value['fid']);
        }
//	var_dump($friendInfo);
//	echo "------";
	//echo $friendInfo[0][0]["uid"] .";" .$friendInfo[0][0]["account"] .";" .$friendInfo[0][0]["nickname"];
        foreach($friendInfo as $value) {
	     echo $value[0]["uid"] .";" .$value[0]["account"] .";" .$value[0]["nickname"] .";" .$value[0]["reg_time"] ."#";
	}
	break;
    case "addfriend":
        $uid = $_REQUEST['uid'];
        $fid = $_REQUEST['fid'];
        if ($uid == $fid) {
            echo "0#not add yourself";
            exit();
        }
        $re = $qqOpreator->addFriend($uid, $fid);
        if ($re) {
            echo "1#" . $re;
            exit();
        } else {
            echo "0#add friend failure";
            exit();
        }
        break;
    case "":
        echo "404";
        break;
}
exit();
?>
