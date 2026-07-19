#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
        // Size: 0x1580
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_ParticleSystem : public source2sdk::client::C_BaseModelEntity
        {
        public:
            char m_szSnapshotFileName[512]; // 0xfb0            
            bool m_bActive; // 0x11b0            
            bool m_bFrozen; // 0x11b1            
            uint8_t _pad11b2[0x2]; // 0x11b2
            float m_flFreezeTransitionDuration; // 0x11b4            
            // metadata: MNotSaved
            std::int32_t m_nStopType; // 0x11b8            
            bool m_bAnimateDuringGameplayPause; // 0x11bc            
            uint8_t _pad11bd[0x3]; // 0x11bd
            // metadata: MNotSaved
            // m_iEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex;
            char m_iEffectIndex[0x8]; // 0x11c0            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x11c8            
            float m_flPreSimTime; // 0x11cc            
            Vector m_vServerControlPoints[4]; // 0x11d0            
            std::uint8_t m_iServerControlPointAssignments[4]; // 0x1200            
            // m_hControlPointEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hControlPointEnts[64];
            char m_hControlPointEnts[0x100]; // 0x1204            
            bool m_bDataStringLocalized; // 0x1304            
            uint8_t _pad1305[0x3]; // 0x1305
            CUtlString m_strDataString; // 0x1308            
            bool m_bNoSave; // 0x1310            
            bool m_bNoFreeze; // 0x1311            
            bool m_bNoRamp; // 0x1312            
            bool m_bStartActive; // 0x1313            
            uint8_t _pad1314[0x4]; // 0x1314
            CUtlSymbolLarge m_iszEffectName; // 0x1318            
            CUtlSymbolLarge m_iszControlPointNames[64]; // 0x1320            
            std::int32_t m_nDataCP; // 0x1520            
            Vector m_vecDataCPValue; // 0x1524            
            std::int32_t m_nTintCP; // 0x1530            
            Color m_clrTint; // 0x1534            
            uint8_t _pad1538[0x20]; // 0x1538
            // metadata: MNotSaved
            bool m_bOldActive; // 0x1558            
            // metadata: MNotSaved
            bool m_bOldFrozen; // 0x1559            
            uint8_t _pad155a[0x26];
            
            // Datamap fields:
            // CUtlString cpoint%d_value[64]; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ParticleSystem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ParticleSystem) == 0x1580);
    };
};
