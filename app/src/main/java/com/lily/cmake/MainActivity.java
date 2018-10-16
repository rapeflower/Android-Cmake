package com.lily.cmake;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

import com.lily.cmake.jni.NativeFun;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView tvCpp = findViewById(R.id.tv_cpp);
        tvCpp.setText(NativeFun.stringFromJNI());
    }
}
