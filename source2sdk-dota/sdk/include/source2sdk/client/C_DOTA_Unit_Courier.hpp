#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/client/CourierState_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1ab0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Unit_Courier : public source2sdk::client::C_DOTA_BaseNPC_Additive
        {
        public:
            bool m_bUnitRespawned; // 0x19b8
            bool m_bPreUpdateFlyingCourier; // 0x19b9
            uint8_t _pad19ba[0x2]; // 0x19ba
            source2sdk::client::PlayerID_t m_nSoleControllingPlayer; // 0x19bc
            bool m_bFlyingCourier; // 0x19c0
            uint8_t _pad19c1[0x3]; // 0x19c1
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x19c4
            source2sdk::client::CourierState_t m_nCourierState; // 0x19c8
            // m_hCourierStateEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCourierStateEntity;
            char m_hCourierStateEntity[0x4]; // 0x19cc
            uint8_t _pad19d0[0xe0];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in C_DOTA_Unit_Courier because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_Courier) == 0x1ab0);
    };
};
