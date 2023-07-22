import mysql.connector

mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    password="*$#Course@1998",
    database="mydatabase"
)

mycursor = mydb.cursor()

sql_command = """
                UPDATE Student
                SET first_name = "Laila"
                WHERE last_name = "Akter"
            """
mycursor.execute(sql_command)
mydb.commit()