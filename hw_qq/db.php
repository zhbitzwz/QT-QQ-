<?php
/**
 * author     : ZWZ
 * createTime : 2017/6/6 10:05
 * description: Model层
 */
function connect_db($host, $user, $pass, $dbname)
{
    $conn = mysql_connect($host, $user, $pass);
    if ($conn) {
        mysql_select_db($dbname);
        mysql_query("set names 'utf-8'");
    } else {
        echo "无法连接数据库: " . $host . "<br>";
    }
    return $conn;
}
//参数：数据库地址，账号，密码，数据库名字
connect_db('localhost', '', '', '');

function query($sql)
{
    //默认使用上一次打开的数据库连接来查询。
    //如果项目只连一个固定的数据库，mysql_query第2个参数可以省略。否则要指明用哪个连接来查询
    $res = mysql_query($sql);
    if ($res) {
        $rowset = false;
        while ($row = mysql_fetch_assoc($res)) {
            $rowset[] = $row;
        }
        mysql_free_result($res);
        return $rowset;
    } else {
        echo "SQL 错误: " . $sql . "<br>";
        return null;
    }
}

function execute($sql)
{
    if (mysql_query($sql)) {
        return true;
    } else {
        echo "SQL 错误: " . $sql . "<br>";
        return false;
    }
}

?>