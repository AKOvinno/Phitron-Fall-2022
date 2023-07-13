use phitron;

CREATE TABLE Student (
    sno INT PRIMARY KEY,
    sname VARCHAR(20),
    age INT
);

INSERT INTO Student(sno, sname,age) 
VALUES(1,'Ankit',17),
       (2,'Ramya',18),
       (3,'Ram',16);
       
SELECT *
FROM Student;

CREATE TABLE Course (
    cno INT PRIMARY KEY,
    cname VARCHAR(20)
);


INSERT INTO Course(cno, cname) 
VALUES(101,'c'),
       (102,'c++'),
       (103,'DBMS');

SELECT *
FROM Course;

CREATE TABLE Enroll (
    sno INT,
    cno INT,
    jdate date,
    PRIMARY KEY(sno,cno),
    FOREIGN KEY(sno) 
        REFERENCES Student(sno)
        ON DELETE CASCADE,
    FOREIGN KEY(cno) 
        REFERENCES Course(cno)
        ON DELETE CASCADE
);

INSERT INTO Enroll(sno,cno,jdate) 
VALUES(1, 101, "06-01-21"),
       (1, 102, "06-01-21"),
       (2, 103, "06-01-21");
       
SELECT *
FROM Enroll;

-- SET SQL_SAFE_UPDATES = 0;
DELETE FROM Student
WHERE sname="Ramya";

Select * from Student;

Select * from Enroll;

