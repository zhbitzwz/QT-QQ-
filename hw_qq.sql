/*
Navicat MySQL Data Transfer

Source Server         : fei
Source Server Version : 100116
Source Host           : 112.74.49.223:3306
Source Database       : hw_qq

Target Server Type    : MYSQL
Target Server Version : 100116
File Encoding         : 65001

Date: 2017-06-11 20:04:06
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for friend
-- ----------------------------
DROP TABLE IF EXISTS `friend`;
CREATE TABLE `friend` (
  `id` int(255) unsigned NOT NULL AUTO_INCREMENT,
  `uid` int(100) DEFAULT NULL,
  `fid` int(100) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=23 DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

-- ----------------------------
-- Records of friend
-- ----------------------------
INSERT INTO `friend` VALUES ('1', '0', '0');
INSERT INTO `friend` VALUES ('9', '3', '4');
INSERT INTO `friend` VALUES ('10', '3', '5');
INSERT INTO `friend` VALUES ('11', '3', '6');
INSERT INTO `friend` VALUES ('12', '3', '7');
INSERT INTO `friend` VALUES ('13', '4', '3');
INSERT INTO `friend` VALUES ('14', '4', '5');
INSERT INTO `friend` VALUES ('15', '4', '6');
INSERT INTO `friend` VALUES ('16', '3', '9');
INSERT INTO `friend` VALUES ('17', '3', '10');
INSERT INTO `friend` VALUES ('18', '3', '11');
INSERT INTO `friend` VALUES ('19', '3', '12');
INSERT INTO `friend` VALUES ('20', '3', '13');
INSERT INTO `friend` VALUES ('21', '4', '10');
INSERT INTO `friend` VALUES ('22', '4', '11');

-- ----------------------------
-- Table structure for users
-- ----------------------------
DROP TABLE IF EXISTS `users`;
CREATE TABLE `users` (
  `uid` int(100) NOT NULL AUTO_INCREMENT,
  `account` varchar(80) COLLATE utf8_unicode_ci NOT NULL,
  `password` varchar(20) COLLATE utf8_unicode_ci NOT NULL,
  `nickname` varchar(80) COLLATE utf8_unicode_ci NOT NULL,
  `reg_time` varchar(20) COLLATE utf8_unicode_ci NOT NULL DEFAULT 'CURRENT_TIMESTAMP(6)',
  PRIMARY KEY (`uid`)
) ENGINE=InnoDB AUTO_INCREMENT=15 DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

-- ----------------------------
-- Records of users
-- ----------------------------
INSERT INTO `users` VALUES ('3', '2998732468', '12345678', 'ZWZ', '1496750383');
INSERT INTO `users` VALUES ('4', '987654321', '12345678', 'ZWA', '1496750383');
INSERT INTO `users` VALUES ('5', '523146877', '12345678', 'ZWB', '1496750383');
INSERT INTO `users` VALUES ('6', '64572124252', '12345678', 'ZWC', '1496751583');
INSERT INTO `users` VALUES ('7', '6489711231', '12345678', 'ZWD', '1496751643');
INSERT INTO `users` VALUES ('8', '4567891234', '12345678', 'zxz', '1497083063');
INSERT INTO `users` VALUES ('9', '987321', '12345678', 'zzz', '1497084066');
INSERT INTO `users` VALUES ('10', '3215975316', '12345678', 'ZWZWZ', '1497178133');
INSERT INTO `users` VALUES ('11', '9513578462', '12345678', 'QWE', '1497178286');
INSERT INTO `users` VALUES ('12', '8745612354', '12345678', 'qwe', '1497178726');
INSERT INTO `users` VALUES ('13', '9876451258', '12345678', 'woe', '1497180705');
INSERT INTO `users` VALUES ('14', '456179384', '12345678', 'aq', '1497181779');
SET FOREIGN_KEY_CHECKS=1;
