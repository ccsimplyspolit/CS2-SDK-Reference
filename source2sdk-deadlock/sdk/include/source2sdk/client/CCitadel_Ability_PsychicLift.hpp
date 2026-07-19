#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1298
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vLiftPosition"
        // static metadata: MNetworkVarNames "Vector m_vCrashPosition"
        #pragma pack(push, 1)
        class CCitadel_Ability_PsychicLift : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x80]; // 0x11d8
            // metadata: MNetworkEnable
            Vector m_vLiftPosition; // 0x1258            
            // metadata: MNetworkEnable
            Vector m_vCrashPosition; // 0x1264            
            uint8_t _pad1270[0x8]; // 0x1270
            // m_vecLiftTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecLiftTargets;
            char m_vecLiftTargets[0x18]; // 0x1278            
            uint8_t _pad1290[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PsychicLift because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PsychicLift) == 0x1298);
    };
};
