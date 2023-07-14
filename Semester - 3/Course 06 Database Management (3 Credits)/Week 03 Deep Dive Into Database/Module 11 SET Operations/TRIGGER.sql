use hr;

CREATE TRIGGER tr_cap
BEFORE INSERT ON employees
FOR EACH ROW 
SET NEW.first_name = UPPER(NEW.first_name);