//===========================================================================
/*
    Software License Agreement (BSD License)
    Copyright (c) 2003-2016, CHAI3D
    (www.chai3d.org)

    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions
    are met:

    * Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.

    * Redistributions in binary form must reproduce the above
    copyright notice, this list of conditions and the following
    disclaimer in the documentation and/or other materials provided
    with the distribution.

    * Neither the name of CHAI3D nor the names of its contributors may
    be used to endorse or promote products derived from this software
    without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
    "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
    LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
    FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
    COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
    INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
    CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
    LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
    ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
    POSSIBILITY OF SUCH DAMAGE. 

    \author    <http://www.chai3d.org>
    \author    Francois Conti
    \version   3.2.0 $Rev: 1869 $
*/
//===========================================================================

//---------------------------------------------------------------------------
#include "CDemo1.h"
using namespace std;
//---------------------------------------------------------------------------

//===========================================================================
/*!
    Constructor of cDemo1.
*/
//===========================================================================
cDemo1::cDemo1(const string a_resourceRoot,
               const int a_numDevices,
               shared_ptr<cGenericHapticDevice> a_hapticDevice0,
               shared_ptr<cGenericHapticDevice> a_hapticDevice1):cTrial(a_resourceRoot, a_numDevices, a_hapticDevice0, a_hapticDevice1)
{
   
};


//===========================================================================
/*!
    Set stiffness of environment

    \param  a_stiffness  Stiffness value [N/m]
*/
//===========================================================================
void cDemo1::setStiffness(double a_stiffness)
{
    // set ground
    m_ground->setStiffness(a_stiffness, true);
    
    // set objects
    m_ODEBody0->m_imageModel->setStiffness(a_stiffness);
    m_ODEBody1->m_imageModel->setStiffness(a_stiffness);
    m_ODEBody2->m_imageModel->setStiffness(a_stiffness);

    m_ODEBase0->m_imageModel->setStiffness(a_stiffness);
    m_ODEBase1->m_imageModel->setStiffness(a_stiffness);
    m_ODEBase2->m_imageModel->setStiffness(a_stiffness);
    m_ODEBase3->m_imageModel->setStiffness(a_stiffness);
    m_ODEBase4->m_imageModel->setStiffness(a_stiffness);
    m_ODEBase5->m_imageModel->setStiffness(a_stiffness);
};


//===========================================================================
/*!
    Initialize position of objects
*/
//===========================================================================
void cDemo1::init()
{

}
