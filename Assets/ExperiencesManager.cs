using System.Collections;
using System.Collections.Generic;
using UnityEngine.U2D;
using UnityEngine;
using TechXR.Core.Sense;

    public class ExperiencesManager : MonoBehaviour
{
    int _index = 0;
    Transform currentGO;

    private void Awake()
    {
        ChangeExperience(0);
    }

    /*
    private void Update()
    {
        if(SenseInput.GetButtonDown(ButtonName.L))
        {
            ChangeExperience(1);
        }
        if(SenseInput.GetButtonDown(ButtonName.U))
        {
            ChangeExperience(-1);
        } 
        if(SenseInput.GetButtonDown(ButtonName.C))
        {
            AnimatorCheckGO("scale");
        }
    }
    */
    public void ChangeExperience(int _change)
    {
        if (_index == transform.childCount - 1 && _change == 1)
            _index = 0;
        else if (_index == 0 && _change == -1)
            _index = transform.childCount - 1;
        else
            _index += _change;

        for (int i = 0; i < transform.childCount; i++)
        {
            transform.GetChild(i).gameObject.SetActive(i == _index);
            if (i == _index)
            {
                currentGO = transform.GetChild(i);
                
            }
        }
    }

        public void AnimatorCheckGO(string trigger)
        {
            currentGO.GetComponent<Animator>().SetTrigger(trigger);
        }
    }
