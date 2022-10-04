-- phpMyAdmin SQL Dump
-- version 5.0.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1:3306
-- Generation Time: Oct 04, 2022 at 07:21 AM
-- Server version: 5.7.31
-- PHP Version: 7.3.21

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `projectmanagementsystem`
--

-- --------------------------------------------------------

--
-- Table structure for table `department`
--

DROP TABLE IF EXISTS `department`;
CREATE TABLE IF NOT EXISTS `department` (
  `Id` int(11) NOT NULL,
  `DepartmentName` varchar(100) NOT NULL,
  PRIMARY KEY (`Id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `department`
--

INSERT INTO `department` (`Id`, `DepartmentName`) VALUES
(1, 'Marketing'),
(2, 'Accounting and Finance'),
(3, 'Human Resource Management'),
(4, 'Research and Development'),
(5, 'IT and Equipment'),
(6, 'Operational');

-- --------------------------------------------------------

--
-- Table structure for table `project`
--

DROP TABLE IF EXISTS `project`;
CREATE TABLE IF NOT EXISTS `project` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `Code` varchar(10) NOT NULL,
  `Name` varchar(100) NOT NULL,
  `Description` varchar(1000) NOT NULL,
  `StartMonth` varchar(50) NOT NULL,
  `fkDepartmentId` int(11) NOT NULL,
  `fkAssignedUser` int(11) NOT NULL,
  `fkStatus` int(11) NOT NULL,
  PRIMARY KEY (`Id`),
  KEY `fkDepartmentId` (`fkDepartmentId`),
  KEY `fkDepartmentId_2` (`fkDepartmentId`),
  KEY `fkAssignedUser` (`fkAssignedUser`),
  KEY `fkStatus` (`fkStatus`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `projectstatus`
--

DROP TABLE IF EXISTS `projectstatus`;
CREATE TABLE IF NOT EXISTS `projectstatus` (
  `Id` int(11) NOT NULL,
  `StatusName` varchar(100) NOT NULL,
  PRIMARY KEY (`Id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `projectstatus`
--

INSERT INTO `projectstatus` (`Id`, `StatusName`) VALUES
(1, 'Not Started'),
(2, 'In Progress'),
(3, 'Completed');

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

DROP TABLE IF EXISTS `user`;
CREATE TABLE IF NOT EXISTS `user` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `Name` varchar(250) NOT NULL,
  `Address` varchar(500) NOT NULL,
  `Gender` varchar(10) NOT NULL,
  `fkDepartmentId` int(11) NOT NULL,
  `fkUserRole` int(11) NOT NULL,
  `Username` varchar(30) NOT NULL,
  `Password` varchar(30) NOT NULL,
  PRIMARY KEY (`Id`),
  KEY `fkUserRole` (`fkUserRole`),
  KEY `fkDepartmentId` (`fkDepartmentId`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`Id`, `Name`, `Address`, `Gender`, `fkDepartmentId`, `fkUserRole`, `Username`, `Password`) VALUES
(1, 'Pasindu Sampath', 'iosdja', 'Male', 2, 1, 'pasindu', 'pasindu'),
(2, 'Danusha ', 'Sri Lanka', 'Female', 1, 2, 'danusha', 'danusha'),
(3, 'Lakmali', 'Colombo', 'Female', 3, 3, 'lakmali', 'lakmali');

-- --------------------------------------------------------

--
-- Table structure for table `userrole`
--

DROP TABLE IF EXISTS `userrole`;
CREATE TABLE IF NOT EXISTS `userrole` (
  `Id` int(11) NOT NULL,
  `UserRole` varchar(100) NOT NULL,
  PRIMARY KEY (`Id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `userrole`
--

INSERT INTO `userrole` (`Id`, `UserRole`) VALUES
(1, 'CEO'),
(2, 'Manager'),
(3, 'Staff');

--
-- Constraints for dumped tables
--

--
-- Constraints for table `project`
--
ALTER TABLE `project`
  ADD CONSTRAINT `project_ibfk_1` FOREIGN KEY (`fkDepartmentId`) REFERENCES `department` (`Id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  ADD CONSTRAINT `project_ibfk_2` FOREIGN KEY (`fkAssignedUser`) REFERENCES `user` (`Id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  ADD CONSTRAINT `project_ibfk_3` FOREIGN KEY (`fkStatus`) REFERENCES `projectstatus` (`Id`) ON DELETE NO ACTION ON UPDATE NO ACTION;

--
-- Constraints for table `user`
--
ALTER TABLE `user`
  ADD CONSTRAINT `user_ibfk_1` FOREIGN KEY (`fkDepartmentId`) REFERENCES `department` (`Id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  ADD CONSTRAINT `user_ibfk_2` FOREIGN KEY (`fkUserRole`) REFERENCES `userrole` (`Id`) ON DELETE NO ACTION ON UPDATE NO ACTION;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
