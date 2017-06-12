<?php
/**
 * author     : ZWZ
 * createTime : 2017/6/6 10:08
 * description: qq控制层操作类
 */
include_once('db.php');

class qqOperator
{
    //获取单个表的所有信息
    public function getTableInfo($table)
    {
        $re = "";
        if ($table == "users") {
            $sql = "select * from users order by uid asc";
            $re = query($sql);
        }
        if ($table == "friend") {
            $sql = "select * from friend order by id asc";
            $re = query($sql);
        }
        return $re;
    }

    //添加朋友
    public function addFriend($uid, $fid)
    {
        $sql = "insert into friend (uid, fid) values('" . $uid . "', '" . $fid . "')";
        $re = execute($sql);
        if ($re) {
            $pid = mysql_insert_id();
            return $pid;
        } else {
            return false;
        }

    }

    //获取朋友ID
    public function findFriendID($uid)
    {
        $sql = "select fid from friend  where uid = $uid order by uid asc";
        $re = query($sql);
        return $re;
    }

    //获取用户信息
    public function userInfo($uid)
    {
        $sql = "select uid , account , nickname ,reg_time from users  where uid = $uid";
        $re = query($sql);
        return $re;
    }

    //登陆
    public function loginUser($account, $password)
    {
        $sql = "select uid , account ,password, nickname ,reg_time from users  where account = $account and $password";
        $re = query($sql);
        return $re;
    }

    //注册
    public function regUser($account, $password, $nickname)
    {
        $now_time = time();
        $sql = "insert into users (account, password, nickname, reg_time) values('" . $account . "', '" . $password . "', '" . $nickname . "', '" . $now_time . "')";
        $re = execute($sql);
        if ($re) {
            $pid = mysql_insert_id();
            return $pid;
        } else {
            return false;
        }
    }

    /**
     * 自定义的一个数组转换字符串方法
     * @param $arr 数组
     * @return string 字符串
     */
    public static function a2s($arr)
    {
        $str = "";
        foreach ($arr as $key => $value) {
            if (is_array($value)) {
                foreach ($value as $value2) {
                    $str .= urlencode($key) . "[]=" . urlencode($value2) . "&";
                }
            } else {
                $str .= urlencode($key) . "=" . urlencode($value) . "&";
            }
        }
        return $str;
    }

    /**
     * 自定义的一个字符串转化数组方法
     * @param $str
     * @return array
     */
    public static function s2a($str)
    {
        $arr = array();
        parse_str($str, $arr);
        return $arr;
    }
}
