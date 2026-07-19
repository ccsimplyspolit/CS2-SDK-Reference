#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseCombatCharacter.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAI_Expresser;
    };
};

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
        // Size: 0xa40
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CHostageExpresserShim : public source2sdk::server::CBaseCombatCharacter
        {
        public:
            source2sdk::server::CAI_Expresser* m_pExpresser; // 0xa30            
            uint8_t _pad0a38[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CHostageExpresserShim because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CHostageExpresserShim) == 0xa40);
    };
};
