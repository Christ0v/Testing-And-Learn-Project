using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotator : MonoBehaviour
{
    public float speed = 15.0f;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {;
        transform.rotation *= Quaternion.AngleAxis( speed * Time.deltaTime , Vector3.up);
    }
}
