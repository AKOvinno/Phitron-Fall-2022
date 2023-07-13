create database phitron;
use phitron;

CREATE TABLE student_info(
	Roll INT NOT NULL UNIQUE PRIMARY KEY,
    Name VARCHAR(30) NOT NULL,
    Parents_contact_number CHAR(11) NOT NULL,
    Email VARCHAR(30) NOT NULL
);
CREATE TABLE DS_exam(
	Roll INT NOT NULL UNIQUE PRIMARY KEY,
    Marks FLOAT NOT NULL, 
    Course_code VARCHAR(30)
);
CREATE TABLE Algo_exam(
	Roll INT NOT NULL UNIQUE PRIMARY KEY,
    Marks FLOAT NOT NULL, 
    Course_code VARCHAR(30)
);
CREATE TABLE OOP_exam(
	Roll INT NOT NULL UNIQUE PRIMARY KEY,
    Marks FLOAT NOT NULL, 
    Course_code VARCHAR(30)
);

INSERT INTO student_info (Roll, Name, Parents_contact_number, Email) VALUES
(1, 'John Doe', '12345678901', 'john.doe@example.com'),
(2, 'Jane Smith', '23456789012', 'jane.smith@example.com'),
(3, 'Michael Johnson', '34567890123', 'michael.johnson@example.com'),
(4, 'Emily Davis', '45678901234', 'emily.davis@example.com'),
(5, 'Robert Wilson', '56789012345', 'robert.wilson@example.com'),
(6, 'Jessica Taylor', '67890123456', 'jessica.taylor@example.com'),
(7, 'Christopher Anderson', '78901234567', 'christopher@example.com'),
(8, 'Amanda Brown', '89012345678', 'amanda.brown@example.com'),
(9, 'Daniel Martinez', '90123456789', 'daniel.martinez@example.com'),
(10, 'Olivia Thompson', '01234567890', 'olivia.thompson@example.com'),
(11, 'James Garcia', '12345678901', 'james.garcia@example.com'),
(12, 'Sophia Lopez', '23456789012', 'sophia.lopez@example.com'),
(13, 'David Hernandez', '34567890123', 'david.hernandez@example.com'),
(14, 'Isabella Clark', '45678901234', 'isabella.clark@example.com'),
(15, 'Joseph Young', '56789012345', 'joseph.young@example.com'),
(16, 'Mia Lewis', '67890123456', 'mia.lewis@example.com'),
(17, 'Alexander Lee', '78901234567', 'alexander.lee@example.com'),
(18, 'Abigail Walker', '89012345678', 'abigail.walker@example.com'),
(19, 'Matthew Hall', '90123456789', 'matthew.hall@example.com'),
(20, 'Sofia Hill', '01234567890', 'sofia.hill@example.com');

SELECT *
FROM student_info;

INSERT INTO DS_exam (Roll, Marks)
SELECT Roll, FLOOR(RAND()*101) FROM student_info;

SET SQL_SAFE_UPDATES = 0;
UPDATE OOP_exam
SET Course_code = 'CSE401'; -- It will insert value in the full column
SET SQL_SAFE_UPDATES = 1;

INSERT INTO Algo_exam (Roll, Marks)
SELECT Roll, FLOOR(RAND()*101) FROM student_info;

INSERT INTO OOP_exam (Roll, Marks)
SELECT Roll, FLOOR(RAND()*101) FROM student_info;

-- Sorting the table in descending order
SELECT * 
FROM DS_exam
ORDER BY Marks DESC;

-- Which 3 student got the highest marks?
SELECT * 
FROM DS_exam
ORDER BY Marks DESC
LIMIT 3;

-- Name of the first 3 students?
SELECT student_info.name, DS_exam.Marks
FROM student_info
JOIN DS_exam ON student_info.roll = DS_exam.roll
ORDER BY Marks DESC
LIMIT 3;

-- List of the failed students (less than 50 marks)
SELECT student_info.roll, student_info.name, DS_exam.marks
FROM student_info
JOIN DS_exam ON DS_exam.roll = student_info.roll
WHERE DS_exam.marks < 50;

-- No of students failed (less than 50 marks)
SELECT COUNT(*) as Failed_Student_Numbers
FROM DS_exam
WHERE marks < 50;

-- Students from same family (same parents_contact_number)
SELECT Parents_contact_number, COUNT(Parents_contact_number)
FROM student_info
GROUP BY Parents_contact_number
HAVING COUNT(Parents_contact_number) > 1;