package com.android.commonlib;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    private static final String TAG = MainActivity.class.getSimpleName();
    private CalculateTools mCalculateTools;

    // Used to load the 'native-lib' library on application startup.

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        mCalculateTools = new CalculateTools();
        // Example of a call to a native method
        TextView tv = findViewById(R.id.sample_text);
        tv.setText(mCalculateTools.intAdd(18, 8)+"");
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */

}
