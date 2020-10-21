import java.util.Random;

/**
 * Created by IntelliJ IDEA.
 * User: rsv
 * Date: 03.10.2020
 * Time: 19:06
 */
public class TicTacToe {

    private static final int[][] FIELD = new int[3][3];

    public static void main(String[] args) {
        while (!gameFinished()) {
            printField();
            getUserMove();
            makeMove();
        }
    }

    private static boolean gameFinished() {
        for (int[] columns : FIELD) {
            if (columns[0] == columns[1] && columns[1] == columns[2] && columns[0] == 1) {
                System.out.println("X wins!");
                return true;
            }
            if (columns[0] == columns[1] && columns[1] == columns[2] && columns[0] == 2) {
                System.out.println("O wins!");
                return true;
            }
        }
        if (FIELD[0][0] == FIELD[1][1] && FIELD[1][1] == FIELD[2][2] && FIELD[0][0] == 1) {
            System.out.println("X wins!");
            return true;
        }
        if (FIELD[0][0] == FIELD[1][1] && FIELD[1][1] == FIELD[2][2] && FIELD[0][0] == 2) {
            System.out.println("O wins!");
            return true;
        }
        boolean hasEmpty = false;
        for (int[] columns : FIELD) {
            for (int column : columns) {
                if (column == 0) {
                    hasEmpty = true;
                    break;
                }
            }
            if (hasEmpty) {
                break;
            }
        }
        if (!hasEmpty) {
            System.out.println("Draw!");
        }
        return false;
    }

    private static void printField() {
        for (int[] columns : FIELD) {
            for (int value : columns) {
                switch (value) {
                    case 0:
                        System.out.print(" ");
                        break;
                    case 1:
                        System.out.print("X");
                        break;
                    case 2:
                        System.out.print("O");
                        break;
                }
                System.out.print("|");
            }
            System.out.println("\n______");
        }
    }

    private static void getUserMove() {
        while (true) {
            String input = System.console().readLine("Make your move: ");
            String[] line = input.split(" ");
            int i = Integer.parseInt(line[0]);
            int j = Integer.parseInt(line[1]);
            if (i > 2 || i < 0 || j > 2 || j < 0 || FIELD[i][j] != 0) {
                System.out.println("Wrong move!");
                continue;
            }
            FIELD[i][j] = 1;
            break;
        }
    }

    private static void makeMove() {
        Random random = new Random();
        while (true) {
            int i = random.nextInt(3);
            int j = random.nextInt(3);
            if (FIELD[i][j] != 0) {
                continue;
            }
            FIELD[i][j] = 2;
            break;
        }
    }
}