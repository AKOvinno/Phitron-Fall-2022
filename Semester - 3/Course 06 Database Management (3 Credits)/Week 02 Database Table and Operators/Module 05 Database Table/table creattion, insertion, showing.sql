CREATE TABLE Student (
    Roll INT,
    Name VARCHAR(30),
    ContactNo CHAR(11),
    Email VARCHAR(30)
);

INSERT INTO Student (Roll, Name, ContactNo, Email)
VALUES(101, "Rahim", "01712243640", "rahim@gmail.com");

INSERT INTO Student (Roll, Name, ContactNo, Email)
VALUES(102, "Karim", "01612243720", "karim@gmail.com");

INSERT INTO Student (Roll, Name, ContactNo, Email)
VALUES(103, "Rahim", "01722489073", "rh@gmail.com");

INSERT INTO Student (Roll, Name, Email)
VALUES(104, "Ovinno", "rh@gmail.com");

INSERT INTO Student (Roll, Name, ContactNo, Email)
VALUES(105, "Laila", "01791706859", "rh@gmail.com");

SELECT * FROM Student;



