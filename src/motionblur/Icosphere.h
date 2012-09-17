#ifndef Magnum_Examples_Icosphere_h
#define Magnum_Examples_Icosphere_h
/*
    Copyright © 2010, 2011, 2012 Vladimír Vondruš <mosra@centrum.cz>

    This file is part of Magnum.

    Magnum is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License version 3
    only, as published by the Free Software Foundation.

    Magnum is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU Lesser General Public License version 3 for more details.
*/

#include <Color.h>
#include "SceneGraph/Object.h"

namespace Magnum {

class Mesh;

namespace Shaders {
    class PhongShader;
}

namespace Examples {

class Icosphere: public SceneGraph::Object3D {
    public:
        Icosphere(Mesh* mesh, Shaders::PhongShader* shader, const Vector3& color, SceneGraph::Object3D* parent = nullptr);

        inline void advance(GLfloat angle) { rotate(angle, Vector3::zAxis()); }

        void draw(const Matrix4& transformationMatrix, SceneGraph::Camera3D* camera);

    private:
        Mesh* mesh;
        Shaders::PhongShader* shader;
        Color3<GLfloat> color;
};

}}

#endif
