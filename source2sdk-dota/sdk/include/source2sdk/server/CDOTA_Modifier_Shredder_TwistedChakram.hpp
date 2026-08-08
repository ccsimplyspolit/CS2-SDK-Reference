#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1b50
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Shredder_TwistedChakram : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_vControlOne; // 0x1a78
            VectorWS m_vControlTwo; // 0x1a84
            VectorWS m_vControlThree; // 0x1a90
            VectorWS m_vControlFour; // 0x1a9c
            VectorWS m_vTargetLoc; // 0x1aa8
            VectorWS m_vOriginalTargetLoc; // 0x1ab4
            VectorWS m_vSourceLoc; // 0x1ac0
            VectorWS m_vMidPoint; // 0x1acc
            VectorWS m_vEndPoint; // 0x1ad8
            std::int32_t m_nCurrentLeg; // 0x1ae4
            float m_flTravelDuration; // 0x1ae8
            source2sdk::entity2::GameTime_t m_flBoomerangDieTime; // 0x1aec
            bool m_bReturning; // 0x1af0
            uint8_t _pad1af1[0x3]; // 0x1af1
            std::int32_t m_nFramesToWait; // 0x1af4
            // m_hChakram has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hChakram;
            char m_hChakram[0x4]; // 0x1af8
            source2sdk::client::ParticleIndex_t m_nChakramFXIndex; // 0x1afc
            source2sdk::client::ParticleIndex_t m_nOldChakramFXindex; // 0x1b00
            uint8_t _pad1b04[0x4]; // 0x1b04
            // m_vecUniqueHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecUniqueHitList;
            char m_vecUniqueHitList[0x18]; // 0x1b08
            float radius; // 0x1b20
            float spread; // 0x1b24
            float damage; // 0x1b28
            float pass_slow_duration; // 0x1b2c
            float min_throw_duration; // 0x1b30
            float max_throw_duration; // 0x1b34
            uint8_t _pad1b38[0x18];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_TwistedChakram because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Shredder_TwistedChakram) == 0x1b50);
    };
};
