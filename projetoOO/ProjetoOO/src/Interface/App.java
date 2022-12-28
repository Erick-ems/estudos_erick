import javafx.scene.*;
import javafx.stage.*;
import javafx.fxml.*;
import javafx.application.*;

public class App extends Application {

  public static void main (String[] args) throws Exception {
    launch(args);
  }

  public void start(Stage primaryStage) throws Exception {
    FXMLLoader fxmlLoader = new FXMLLoader(getClass().getResource("layout.fxml"));
    Parent root = fxmlLoader.load();
    Scene tela = new Scene(root);

    primaryStage.setTitle("Erick Teste de janela");
    primaryStage.setScene(tela);
    primaryStage.show();

  }

}