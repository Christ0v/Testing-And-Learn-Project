using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Swing : MonoBehaviour
{
    public float size = 1.0f;
    public float speed = 1.0f;

    Vector3 startPosition;
    float time;

    // Start is called before the first frame update
    void Start()
    {
        startPosition = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        time += Time.deltaTime;
        transform.position = startPosition + Vector3.up * Mathf.Sin(time * 2.0f * Mathf.PI * speed)  * size;
    }
}
