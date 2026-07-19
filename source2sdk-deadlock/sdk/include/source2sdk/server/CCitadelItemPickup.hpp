#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EObjectivePositions_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x5510
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "int32 m_eLootType"
        // static metadata: MNetworkVarNames "int32 m_nCurrencyValue"
        // static metadata: MNetworkVarNames "string_t m_iszModelName"
        // static metadata: MNetworkVarNames "float m_flModelScale"
        // static metadata: MNetworkVarNames "EHANDLE m_hTargetPlayer"
        // static metadata: MNetworkVarNames "float m_flFallRate"
        #pragma pack(push, 1)
        class CCitadelItemPickup : public source2sdk::server::CCitadelAnimatingModelEntity
        {
        public:
            uint8_t _pad0bf0[0x18]; // 0xbf0
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xc08            
            // metadata: MNetworkEnable
            std::int32_t m_eLootType; // 0xc28            
            // metadata: MNetworkEnable
            std::int32_t m_nCurrencyValue; // 0xc2c            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszModelName; // 0xc30            
            // metadata: MNetworkEnable
            float m_flModelScale; // 0xc38            
            // metadata: MNetworkEnable
            // m_hTargetPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetPlayer;
            char m_hTargetPlayer[0x4]; // 0xc3c            
            // metadata: MNetworkEnable
            float m_flFallRate; // 0xc40            
            source2sdk::client::EObjectivePositions_t m_eObjectivePosition; // 0xc44            
            bool m_bRequireGroundForPickup; // 0xc48            
            // metadata: MNotSaved
            bool m_bOnGround; // 0xc49            
            uint8_t _pad0c4a[0x2]; // 0xc4a
            std::int32_t m_nKillingTeamNumber; // 0xc4c            
            Vector m_vHomePosition; // 0xc50            
            Vector m_vDropPosition; // 0xc5c            
            source2sdk::entity2::GameTime_t m_tFirstPickupTime; // 0xc68            
            uint8_t _pad0c6c[0x48a4];
            
            // Datamap fields:
            // bool from_crate; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelItemPickup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelItemPickup) == 0x5510);
    };
};
