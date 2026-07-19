#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAnimatingModelEntity.hpp"
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
        // Size: 0xcf0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int32 m_eLootType"
        // static metadata: MNetworkVarNames "int32 m_nCurrencyValue"
        // static metadata: MNetworkVarNames "string_t m_iszModelName"
        // static metadata: MNetworkVarNames "float m_flModelScale"
        // static metadata: MNetworkVarNames "EHANDLE m_hTargetPlayer"
        // static metadata: MNetworkVarNames "float m_flFallRate"
        #pragma pack(push, 1)
        class C_CitadelItemPickup : public source2sdk::client::CCitadelAnimatingModelEntity
        {
        public:
            uint8_t _pad0cb0[0x18]; // 0xcb0
            // metadata: MNetworkEnable
            std::int32_t m_eLootType; // 0xcc8            
            // metadata: MNetworkEnable
            std::int32_t m_nCurrencyValue; // 0xccc            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszModelName; // 0xcd0            
            // metadata: MNetworkEnable
            float m_flModelScale; // 0xcd8            
            // metadata: MNetworkEnable
            // m_hTargetPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTargetPlayer;
            char m_hTargetPlayer[0x4]; // 0xcdc            
            // metadata: MNetworkEnable
            float m_flFallRate; // 0xce0            
            uint8_t _pad0ce4[0xc];
            
            // Datamap fields:
            // bool from_crate; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelItemPickup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelItemPickup) == 0xcf0);
    };
};
