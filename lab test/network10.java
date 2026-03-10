/**-----Server.java------------------------------
import java.io.*;
import java.net.*;

public class Server {
    public static void main(String[] args) {
        try {
            // Create UDP socket at port 5000
            DatagramSocket serverSocket = new DatagramSocket(5000);
            System.out.println("UDP Server is running...");

            byte[] receiveData = new byte[1024];
            byte[] sendData;

            while (true) {

                // Receive packet from client
                DatagramPacket receivePacket =
                        new DatagramPacket(receiveData, receiveData.length);

                serverSocket.receive(receivePacket);

                String message = new String(receivePacket.getData(), 0, receivePacket.getLength());

                System.out.println("Received from client: " + message);

                // Wait 6 milliseconds
                Thread.sleep(6);

                // Convert message to uppercase
                String upperMessage = message.toUpperCase();
                sendData = upperMessage.getBytes();

                // Get client address and port
                InetAddress clientAddress = receivePacket.getAddress();
                int clientPort = receivePacket.getPort();

                // Send response back to client
                DatagramPacket sendPacket =
                        new DatagramPacket(sendData, sendData.length, clientAddress, clientPort);

                serverSocket.send(sendPacket);

                System.out.println("Sent back: " + upperMessage);
            }

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
*/


/**-----Client.java-------------------------------------
import java.io.*;
import java.net.*;

public class Client {
    public static void main(String[] args) {
        try {

            BufferedReader keyboard =
                    new BufferedReader(new InputStreamReader(System.in));

            DatagramSocket clientSocket = new DatagramSocket();

            InetAddress serverAddress = InetAddress.getByName("localhost");

            byte[] sendData;
            byte[] receiveData = new byte[1024];

            System.out.print("Enter message: ");
            String message = keyboard.readLine();

            sendData = message.getBytes();

            // Send packet to server
            DatagramPacket sendPacket =
                    new DatagramPacket(sendData, sendData.length, serverAddress, 5000);

            clientSocket.send(sendPacket);

            // Receive response from server
            DatagramPacket receivePacket =
                    new DatagramPacket(receiveData, receiveData.length);

            clientSocket.receive(receivePacket);

            String response =
                    new String(receivePacket.getData(), 0, receivePacket.getLength());

            System.out.println("Server replied: " + response);

            clientSocket.close();

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
*/
