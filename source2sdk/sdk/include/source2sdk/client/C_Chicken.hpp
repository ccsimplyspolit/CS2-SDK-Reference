#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_AttributeContainer.hpp"
#include "source2sdk/client/C_DynamicProp.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CSPlayerPawn;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x18b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_Chicken : public source2sdk::client::C_DynamicProp
        {
        public:
            uint8_t _pad13c0[0x8]; // 0x13c0
            // m_leader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_leader;
            char m_leader[0x4]; // 0x13c8            
            uint8_t _pad13cc[0x4]; // 0x13cc
            source2sdk::client::C_AttributeContainer m_AttributeManager; // 0x13d0            
            bool m_bAttributesInitialized; // 0x18a0            
            uint8_t _pad18a1[0x3]; // 0x18a1
            source2sdk::client::ParticleIndex_t m_hWaterWakeParticles; // 0x18a4            
            bool m_bIsPreviewModel; // 0x18a8            
            uint8_t _pad18a9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Chicken because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Chicken) == 0x18b0);
    };
};
