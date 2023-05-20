#ifndef __NTF_AUDIO_WAVE_HPP
#define __NTF_AUDIO_WAVE_HPP

#include <stdint.h>

// https://www.mmsp.ece.mcgill.ca/Documents/AudioFormats/WAVE/WAVE.html

namespace NTF
{
    namespace Audio
    {
        struct Wave
        {
            struct Chunk
            {
                char ckID[4];
                int32_t cksize;
            };
            Chunk riff;
            char ckID[4];
            struct fmt : public Chunk
            {
                int16_t wFormatTag;
                uint16_t wChannels;
                uint32_t dwSamplesPerSec;
                uint32_t dwAvgBytesPerSec;
                uint16_t wBlockAlign;
                uint16_t wBitsPerSample;
            };
        };
    }
}

#endif