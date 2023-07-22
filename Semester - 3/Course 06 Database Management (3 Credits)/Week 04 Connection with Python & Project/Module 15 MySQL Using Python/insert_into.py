import mysql.connector

mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    password="*$#Course@1998",
    database="mydatabase"
)

mycursor = mydb.cursor()

# Create a table
sql_command = """
                INSERT INTO Student(roll, first_name, last_name)
                VALUES(1, "Laila", "Akter");
            """

mycursor.execute(sql_command)
mydb.commit()