using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartScreen : MonoBehaviour
{
    // Update is called once per frame
    public void LoadMenu()
    {
       SceneManager.LoadScene("Start Game");
    }
}