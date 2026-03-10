/**------Server.java----------------------------------------
import java.io.*;
import java.net.*;

public class Server {
    public static void main(String[] args) {
        try {
            // Create ServerSocket listening on port 5000
            ServerSocket serverSocket = new ServerSocket(5000);
            System.out.println("Server is running...");
            System.out.println("Waiting for client connection...");

            // Accept client connection
            Socket socket = serverSocket.accept();
            System.out.println("Client connected!");

            // Input stream (receive message from client)
            BufferedReader input = new BufferedReader(
                    new InputStreamReader(socket.getInputStream()));

            // Output stream (send message to client)
            PrintWriter output = new PrintWriter(socket.getOutputStream(), true);

            // Read message from client
            String message = input.readLine();
            System.out.println("Received from client: " + message);

            // Convert message to uppercase
            String upperMessage = message.toUpperCase();

            // Send uppercase message back to client
            output.println(upperMessage);

            System.out.println("Sent back to client: " + upperMessage);

            // Close connections
            socket.close();
            serverSocket.close();

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
*/

/**---------Client.java----------------------------------------
import java.io.*;
import java.net.*;

public class Client {
    public static void main(String[] args) {
        try {
            // Connect to server (localhost, port 5000)
            Socket socket = new Socket("localhost", 5000);

            // Input from keyboard
            BufferedReader keyboard = new BufferedReader(
                    new InputStreamReader(System.in));

            // Send data to server
            PrintWriter output = new PrintWriter(socket.getOutputStream(), true);

            // Receive data from server
            BufferedReader input = new BufferedReader(
                    new InputStreamReader(socket.getInputStream()));

            // Read message from user
            System.out.print("Enter message: ");
            String message = keyboard.readLine();

            // Send message to server
            output.println(message);

            // Receive uppercase message from server
            String response = input.readLine();
            System.out.println("Server replied: " + response);

            // Close connection
            socket.close();

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
*/

/**-----How to Run the Program-------------------
1:compile->
    javac Server.java
    javac Client.java
2:run Server->
    java Server
3:run Client->  
    java Client
*/
