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
        // Size: 0x1058
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_ParticleSystem : public source2sdk::client::C_BaseModelEntity
        {
        public:
            char m_szSnapshotFileName[512]; // 0xa88            
            bool m_bActive; // 0xc88            
            bool m_bFrozen; // 0xc89            
            uint8_t _pad0c8a[0x2]; // 0xc8a
            float m_flFreezeTransitionDuration; // 0xc8c            
            // metadata: MNotSaved
            std::int32_t m_nStopType; // 0xc90            
            bool m_bAnimateDuringGameplayPause; // 0xc94            
            uint8_t _pad0c95[0x3]; // 0xc95
            // metadata: MNotSaved
            // m_iEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex;
            char m_iEffectIndex[0x8]; // 0xc98            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xca0            
            float m_flPreSimTime; // 0xca4            
            Vector m_vServerControlPoints[4]; // 0xca8            
            std::uint8_t m_iServerControlPointAssignments[4]; // 0xcd8            
            // m_hControlPointEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hControlPointEnts[64];
            char m_hControlPointEnts[0x100]; // 0xcdc            
            bool m_bDataStringLocalized; // 0xddc            
            uint8_t _pad0ddd[0x3]; // 0xddd
            CUtlString m_strDataString; // 0xde0            
            bool m_bNoSave; // 0xde8            
            bool m_bNoFreeze; // 0xde9            
            bool m_bNoRamp; // 0xdea            
            bool m_bStartActive; // 0xdeb            
            uint8_t _pad0dec[0x4]; // 0xdec
            CUtlSymbolLarge m_iszEffectName; // 0xdf0            
            CUtlSymbolLarge m_iszControlPointNames[64]; // 0xdf8            
            std::int32_t m_nDataCP; // 0xff8            
            Vector m_vecDataCPValue; // 0xffc            
            std::int32_t m_nTintCP; // 0x1008            
            Color m_clrTint; // 0x100c            
            uint8_t _pad1010[0x20]; // 0x1010
            // metadata: MNotSaved
            bool m_bOldActive; // 0x1030            
            // metadata: MNotSaved
            bool m_bOldFrozen; // 0x1031            
            uint8_t _pad1032[0x26];
            
            // Datamap fields:
            // CUtlString cpoint%d_value[64]; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ParticleSystem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ParticleSystem) == 0x1058);
    };
};
