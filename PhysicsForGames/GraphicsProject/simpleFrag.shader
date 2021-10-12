//A simple fragment shader
#version 410


in vec4 fColor;
in vec2 ftexCoord;

uniform sampler2D diffuseTexture, fTexCoord);

out vec4 pColor;

void main() {
	pColor = fColor * texture(diffuseTexture, fTexCoord);
	pColor = fColor;
}