#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x68
        // Has VTable
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct fogparams_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            Vector dirPrimary; // 0x8            
            Color colorPrimary; // 0x14            
            Color colorSecondary; // 0x18            
            // metadata: MNotSaved
            Color colorPrimaryLerpTo; // 0x1c            
            // metadata: MNotSaved
            Color colorSecondaryLerpTo; // 0x20            
            float start; // 0x24            
            float end; // 0x28            
            float farz; // 0x2c            
            float maxdensity; // 0x30            
            float exponent; // 0x34            
            float HDRColorScale; // 0x38            
            // metadata: MNotSaved
            float skyboxFogFactor; // 0x3c            
            // metadata: MNotSaved
            float skyboxFogFactorLerpTo; // 0x40            
            // metadata: MNotSaved
            float startLerpTo; // 0x44            
            // metadata: MNotSaved
            float endLerpTo; // 0x48            
            // metadata: MNotSaved
            float maxdensityLerpTo; // 0x4c            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t lerptime; // 0x50            
            float duration; // 0x54            
            float blendtobackground; // 0x58            
            float scattering; // 0x5c            
            float locallightscale; // 0x60            
            bool enable; // 0x64            
            bool blend; // 0x65            
            // metadata: MNotSaved
            bool m_bPadding2; // 0x66            
            // metadata: MNotSaved
            bool m_bPadding; // 0x67            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::fogparams_t, dirPrimary) == 0x8);
        static_assert(offsetof(source2sdk::client::fogparams_t, colorPrimary) == 0x14);
        static_assert(offsetof(source2sdk::client::fogparams_t, colorSecondary) == 0x18);
        static_assert(offsetof(source2sdk::client::fogparams_t, colorPrimaryLerpTo) == 0x1c);
        static_assert(offsetof(source2sdk::client::fogparams_t, colorSecondaryLerpTo) == 0x20);
        static_assert(offsetof(source2sdk::client::fogparams_t, start) == 0x24);
        static_assert(offsetof(source2sdk::client::fogparams_t, end) == 0x28);
        static_assert(offsetof(source2sdk::client::fogparams_t, farz) == 0x2c);
        static_assert(offsetof(source2sdk::client::fogparams_t, maxdensity) == 0x30);
        static_assert(offsetof(source2sdk::client::fogparams_t, exponent) == 0x34);
        static_assert(offsetof(source2sdk::client::fogparams_t, HDRColorScale) == 0x38);
        static_assert(offsetof(source2sdk::client::fogparams_t, skyboxFogFactor) == 0x3c);
        static_assert(offsetof(source2sdk::client::fogparams_t, skyboxFogFactorLerpTo) == 0x40);
        static_assert(offsetof(source2sdk::client::fogparams_t, startLerpTo) == 0x44);
        static_assert(offsetof(source2sdk::client::fogparams_t, endLerpTo) == 0x48);
        static_assert(offsetof(source2sdk::client::fogparams_t, maxdensityLerpTo) == 0x4c);
        static_assert(offsetof(source2sdk::client::fogparams_t, lerptime) == 0x50);
        static_assert(offsetof(source2sdk::client::fogparams_t, duration) == 0x54);
        static_assert(offsetof(source2sdk::client::fogparams_t, blendtobackground) == 0x58);
        static_assert(offsetof(source2sdk::client::fogparams_t, scattering) == 0x5c);
        static_assert(offsetof(source2sdk::client::fogparams_t, locallightscale) == 0x60);
        static_assert(offsetof(source2sdk::client::fogparams_t, enable) == 0x64);
        static_assert(offsetof(source2sdk::client::fogparams_t, blend) == 0x65);
        static_assert(offsetof(source2sdk::client::fogparams_t, m_bPadding2) == 0x66);
        static_assert(offsetof(source2sdk::client::fogparams_t, m_bPadding) == 0x67);
        
        static_assert(sizeof(source2sdk::client::fogparams_t) == 0x68);
    };
};
