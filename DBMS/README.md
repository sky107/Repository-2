## Command to create the Table for NthHighest.sql and SqlAssignment.sql queries
-----------------









CREATE TABLE `dbms` (
	`Name` VARCHAR(50) NULL DEFAULT NULL COLLATE 'utf8mb4_general_ci',
	`Email` VARCHAR(50) NULL DEFAULT NULL COLLATE 'utf8mb4_general_ci',
	`Marks` INT(11) NULL DEFAULT NULL,
	`age` INT(11) NULL DEFAULT NULL,
	`date_of_creation` TIMESTAMP NULL DEFAULT NULL
)
COLLATE='utf8mb4_general_ci'
ENGINE=InnoDB
;
