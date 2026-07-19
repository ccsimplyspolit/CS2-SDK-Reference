#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/MoveType_t.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x758
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierVData_SetMoveType : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyDescription "The move type to switch to.  Some move types will have weird behaviors when swapped to, ie: MOVETYPE_SYNC"
            source2sdk::client::MoveType_t m_nMoveType; // 0x750            
            uint8_t _pad0751[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierVData_SetMoveType because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifierVData_SetMoveType) == 0x758);
    };
};
