/** mysql-connector-j-x.x.x.jar -> put this in same folder */

/** First create the database and table in MySQL using XAMPP:

      CREATE DATABASE studentdb;

      USE studentdb;
      
      CREATE TABLE student (
          id INT PRIMARY KEY AUTO_INCREMENT,
          name VARCHAR(50),
          email VARCHAR(50),
          phone VARCHAR(15)
      );

*/

import java.sql.*;
import java.util.Scanner;

public class mySql {

    static final String URL = "jdbc:mysql://localhost:3306/studentdb";
    static final String USER = "root";
    static final String PASS = "";

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        try {
            Connection con = DriverManager.getConnection(URL, USER, PASS);

            while (true) {

                System.out.println("\n1.Insert");
                System.out.println("2.Delete");
                System.out.println("3.Update");
                System.out.println("4.Show");
                System.out.println("5.Exit");

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

                        String insertQuery = "INSERT INTO student(name,email,phone) VALUES(?,?,?)";

                        PreparedStatement ps1 = con.prepareStatement(insertQuery);
                        ps1.setString(1, name);
                        ps1.setString(2, email);
                        ps1.setString(3, phone);

                        ps1.executeUpdate();
                        System.out.println("Record inserted successfully");
                        break;

                    case 2: // DELETE
                        System.out.print("Enter ID to delete: ");
                        int id = sc.nextInt();

                        String deleteQuery = "DELETE FROM student WHERE id=?";

                        PreparedStatement ps2 = con.prepareStatement(deleteQuery);
                        ps2.setInt(1, id);

                        ps2.executeUpdate();
                        System.out.println("Record deleted successfully");
                        break;

                    case 3: // UPDATE
                        System.out.print("Enter ID to update: ");
                        int uid = sc.nextInt();
                        sc.nextLine();

                        System.out.print("Enter New Name: ");
                        String newName = sc.nextLine();

                        System.out.print("Enter New Email: ");
                        String newEmail = sc.nextLine();

                        System.out.print("Enter New Phone: ");
                        String newPhone = sc.nextLine();

                        String updateQuery = "UPDATE student SET name=?, email=?, phone=? WHERE id=?";

                        PreparedStatement ps3 = con.prepareStatement(updateQuery);

                        ps3.setString(1, newName);
                        ps3.setString(2, newEmail);
                        ps3.setString(3, newPhone);
                        ps3.setInt(4, uid);

                        ps3.executeUpdate();

                        System.out.println("Record updated successfully");
                        break;

                    case 4: // SHOW
                        String showQuery = "SELECT * FROM student";

                        Statement stmt = con.createStatement();
                        ResultSet rs = stmt.executeQuery(showQuery);

                        System.out.println("\nStudent Records:");
                        System.out.println("-----------------------------");

                        while (rs.next()) {
                            System.out.println("ID: " + rs.getInt("id"));
                            System.out.println("Name: " + rs.getString("name"));
                            System.out.println("Email: " + rs.getString("email"));
                            System.out.println("Phone: " + rs.getString("phone"));
                            System.out.println("-----------------------------");
                        }
                        break;

                    case 5:
                        System.out.println("Program terminated.");
                        con.close();
                        System.exit(0);

                    default:
                        System.out.println("Invalid choice.");
                }
            }

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}

/**
1.compile :  javac -cp ".;mysql-connector-j-x.x.x.jar" mySql.java

2.run :   java -cp ".;mysql-connector-j-x.x.x.jar" mySql
*/
