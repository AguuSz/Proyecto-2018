package com.example.agus.dashboard_final;

import android.annotation.SuppressLint;
import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.support.v7.widget.CardView;
import android.support.v7.widget.PopupMenu;
import android.view.View;

public class Home extends AppCompatActivity implements View.OnClickListener {

    //Toolbar toolbar;
    private CardView bateria_Card,brillo_Card,idea1_Card,idea2_Card,bluetooth_Card;
    @SuppressLint("WrongViewCast")
    @Override

    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_home);
        //toolbar = (Toolbar) findViewById(R.id.toolbarMain);
        //new DrawerBuilder().withActivity(this).build();

        //Definiendo las cartas
        bateria_Card = (CardView) findViewById(R.id.bateria_card);
        brillo_Card = (CardView) findViewById(R.id.brillo_card);
        idea1_Card = (CardView) findViewById(R.id.idea1_card);
        idea2_Card = (CardView) findViewById(R.id.idea2_card);
        bluetooth_Card = (CardView) findViewById(R.id.bluetooth_card);
        //Añadimos la opcion para que pueda obtener el click
        bateria_Card.setOnClickListener(this);
        brillo_Card.setOnClickListener(this);
        idea1_Card.setOnClickListener(this);
        idea2_Card.setOnClickListener(this);
        bluetooth_Card.setOnClickListener(this);
    }

    @Override
    public void onClick(View view) {
        Intent i ;

        switch (view.getId()) {
            case R.id.bateria_card : i = new Intent(this, caso_bateria.class);startActivity(i); break;
            case R.id.brillo_card : i = new Intent(this, caso_brillo.class);startActivity(i); break;
            case R.id.idea1_card : i = new Intent(this, caso_fecha_hora.class);startActivity(i); break;
            case R.id.idea2_card : i = new Intent(this, caso_tema.class);startActivity(i); break;
            case R.id.bluetooth_card : i = new Intent(this, caso_bluetooth.class);startActivity(i); break;
            default: break;
        }
    }
}
