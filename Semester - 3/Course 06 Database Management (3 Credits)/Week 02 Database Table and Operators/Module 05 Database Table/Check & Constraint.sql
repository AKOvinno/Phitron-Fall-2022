CREATE TABLE Student (
	Roll INT NOT NULL UNIQUE PRIMARY KEY,
    Name VARCHAR(30) NOT NULL,
    ContactNo CHAR(11) UNIQUE,
    Age INT CHECK(Age >= 18),
    Email VARCHAR(30), 
    
    CONSTRAINT email_unique_const UNIQUE(Email)
    );
    