#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointEntity.hpp"
#include "source2sdk/client/SceneRequestHandle_t.hpp"

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
        // Standard-layout class: false
        // Size: 0x610
        // Has VTable
        #pragma pack(push, 1)
        class CInfoInteraction : public source2sdk::client::C_PointEntity
        {
        public:
            CUtlSymbolLarge m_strInteractVData; // 0x5f0            
            uint8_t _pad05f8[0x10]; // 0x5f8
            float m_flInteractRadius; // 0x608            
            source2sdk::client::SceneRequestHandle_t m_hSceneRequest; // 0x60c            
            
            // Datamap fields:
            // void InputBeginSequence; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoInteraction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CInfoInteraction) == 0x610);
    };
};
