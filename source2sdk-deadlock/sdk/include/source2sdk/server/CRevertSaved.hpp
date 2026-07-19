#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CModelPointEntity.hpp"

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
        // Size: 0x790
        // Has VTable
        #pragma pack(push, 1)
        class CRevertSaved : public source2sdk::server::CModelPointEntity
        {
        public:
            float m_loadTime; // 0x780            
            float m_Duration; // 0x784            
            float m_HoldTime; // 0x788            
            uint8_t _pad078c[0x4];
            
            // Datamap fields:
            // void InputReload; // 0x0
            // void CRevertSavedLoadThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRevertSaved because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRevertSaved) == 0x790);
    };
};
