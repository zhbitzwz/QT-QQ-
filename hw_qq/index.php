<?php
/**
 * author     : ZWZ
 * createTime : 2017/6/6 10:11
 * description: index测试
 */

$userId = $_POST['userid'];
$passwd = $_POST['passwd'];
//    $userId = $_GET['userid'];
//    $passwd = $_GET['passwd'];
if ($userId == null && $passwd == null) {
    echo json_encode(array("status" => 0, "msg" => "user error or passwd error"));
} else {
    //TODO 网络请求回调函数
    // echo json_encode(array("status" => 1 , "msg" =>"user and passwd correct"));
    echo "user and passwd correct";
}
?>