#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDamageRecord.hpp"
#include "source2sdk/client/CPlayerControllerComponent.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb0
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayerController_DamageServices : public source2sdk::client::CPlayerControllerComponent
        {
        public:
            std::int32_t m_nSendUpdate; // 0x40            
            uint8_t _pad0044[0x4]; // 0x44
            // m_DamageList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CDamageRecord> m_DamageList;
            char m_DamageList[0x68]; // 0x48            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayerController_DamageServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSPlayerController_DamageServices) == 0xb0);
    };
};
