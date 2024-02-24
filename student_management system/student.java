package student_system;

import java.sql.*;
import java.sql.SQLException;
import java.util.Scanner;

public class main {

	public static void menu() {
		System.out.println("----SYSTEM MANAGEMENT SYSTEM-----");
		System.out.println("1.Add student record");
		System.out.println("2.Search student record");
		System.out.println("3.Delete student record ");
		System.out.println("4.Exit");
		System.out.println("----------------------------------");
	}

	public static void main(String[] args) throws SQLException {
		student std = new student();

		Scanner scan = new Scanner(System.in);
		int ch = 0, choice = 0;
		do {
			menu();
			ch = scan.nextInt();
			switch (ch) {
			case 1:
				std.add_record();
				break;
			case 2:
				System.out.println("search by.. 1.roll_num  2,department  3.read _all");
				choice = scan.nextInt();
				if (choice == 1) {
					std.search_roll();
				} else if (choice == 2) {
					std.search_dept();
				} else if (choice == 3) {
					System.out.println("Admin pass :");
					String x = scan.next();
					std.read_data(x);
				} else {
					System.out.println("Invalid choice ");
				}
				break;
			case 3: {
				System.out.println("Admin pass :");
				String x = scan.next();
				std.delete(x);
				break;
			}
			case 4:
				
				break;
			}
		} while (ch != 4);

	}

}
