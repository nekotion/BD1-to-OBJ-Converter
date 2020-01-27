#pragma once

#include <iostream>
#include <vector>

const auto NUM_TEXTURES = 10;
const auto NUM_FACES = 6;
const auto NUM_VERTICES = 8;

struct MapData
{
    struct Block
    {
        struct Face
        {
            struct Uv
            {
                float u;
                float v;
            } uv[4];

            uint8_t textureId;

        } face[NUM_FACES];

        struct Vertices
        {
            float x;
            float y;
            float z;
        } vertex[NUM_VERTICES];

        bool isEnabled;
    } block[160];

    std::string texturesPath[NUM_TEXTURES];
    uint8_t numBlocks;
};
