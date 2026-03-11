/** Open MS Access and create a database: PUST_ICE.accdb ;
    create Student table with fields :
    Name, Email, Phone
    
    (save in the same folder)
*/

/** Download ucanaccess JDBC driver from 'sourceforge';
    Extract the ZIP file.Put all the .jar files in the same folder.
    .jar files like : ucanaccess.jar , ucanload.jar , jackcess.jar,
    commons-lang3.jar , commons-logging.jar , hsqldb.jar
*/

import java.sql.*;
import java.util.Scanner;

public class accdb {

    static final String URL = "jdbc:ucanaccess://P:/code/NPJ/PUST_ICE.accdb";

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        try {

            Connection con = DriverManager.getConnection(URL);

            while (true) {

                System.out.println("\n1. Insert Student");
                System.out.println("2. Show All Students");
                System.out.println("3. Exit");

                System.out.print("Choose option: ");
                int choice = sc.nextInt();
                sc.nextLine();

                switch (choice) {

                    case 1: // INSERT
                        System.out.print("Enter Name: ");
                        String name = sc.nextLine();

                        System.out.print("Enter Email: ");
                        String email = sc.nextLine();

                        System.out.print("Enter Phone: ");
                        String phone = sc.nextLine();

                        String insertQuery =
                                "INSERT INTO Student(Name,Email,Phone) VALUES(?,?,?)";

                        PreparedStatement ps =
                                con.prepareStatement(insertQuery);

                        ps.setString(1, name);
                        ps.setString(2, email);
                        ps.setString(3, phone);

                        ps.executeUpdate();

                        System.out.println("Student inserted successfully");
                        break;

                    case 2: // SHOW
                        String showQuery = "SELECT * FROM Student";

                        Statement stmt = con.createStatement();
                        ResultSet rs = stmt.executeQuery(showQuery);

                        System.out.println("\nStudent Records:");
                        System.out.println("-----------------------------");

                        while (rs.next()) {

                            System.out.println("Name  : " +
                                    rs.getString("Name"));
                            System.out.println("Email : " +
                                    rs.getString("Email"));
                            System.out.println("Phone : " +
                                    rs.getString("Phone"));

                            System.out.println("-----------------------------");
                        }

                        break;

                    case 3: // EXIT
                        con.close();
                        System.out.println("Program terminated");
                        System.exit(0);

                    default:
                        System.out.println("Invalid choice");
                }
            }

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}

/**
1.go to your folder like : cd P:\code\NPJ

2.compile : javac -cp ".;* " AccessStudentDB.java

3.run : java -cp ".;*" AccessStudentDB
*/
