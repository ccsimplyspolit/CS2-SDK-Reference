#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPropDoorRotating.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xe60
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPropDoorRotatingBreakable : public source2sdk::server::CPropDoorRotating
        {
        public:
            // metadata: MNotSaved
            bool m_bBreakable; // 0xe40            
            // metadata: MNotSaved
            bool m_isAbleToCloseAreaPortals; // 0xe41            
            uint8_t _pad0e42[0x2]; // 0xe42
            // metadata: MNotSaved
            std::int32_t m_currentDamageState; // 0xe44            
            // metadata: MNotSaved
            // m_damageStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbolLarge> m_damageStates;
            char m_damageStates[0x18]; // 0xe48            
            
            // Datamap fields:
            // void InputSetUnbreakable; // 0x0
            // void InputSetBreakable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPropDoorRotatingBreakable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPropDoorRotatingBreakable) == 0xe60);
    };
};
