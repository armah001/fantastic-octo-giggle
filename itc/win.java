import javafx.application.Application;
import javafx.event.EventType;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.stage.Stage;


public class win extends Application{
@Override
public void start(Stage primaryStage) {
primaryStage.setTitle(" Demo");
Label myLabel= new Label("Hello");
Scene scene = new Scene(myLabel, 400,400);
primaryStage.setScene(scene);
primaryStage.show();
}
public static void main(String [] args){
    Application.launch(args);
}
}