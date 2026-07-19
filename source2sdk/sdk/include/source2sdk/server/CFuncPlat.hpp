#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBasePlatTrain.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x828
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncPlat : public source2sdk::server::CBasePlatTrain
        {
        public:
            float m_flSpeed; // 0x818            
            uint8_t _pad081c[0x4]; // 0x81c
            CUtlSymbolLarge m_sNoise; // 0x820            
            
            // Datamap fields:
            // void InputToggle; // 0x0
            // void InputGoUp; // 0x0
            // void InputGoDown; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncPlat because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncPlat) == 0x828);
    };
};
