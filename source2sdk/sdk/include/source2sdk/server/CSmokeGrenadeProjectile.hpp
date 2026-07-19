#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseCSGrenadeProjectile.hpp"

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
        // Size: 0x2d60
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CSmokeGrenadeProjectile : public source2sdk::server::CBaseCSGrenadeProjectile
        {
        public:
            uint8_t _pad0a60[0x28]; // 0xa60
            std::int32_t m_nSmokeEffectTickBegin; // 0xa88            
            bool m_bDidSmokeEffect; // 0xa8c            
            uint8_t _pad0a8d[0x3]; // 0xa8d
            std::int32_t m_nRandomSeed; // 0xa90            
            Vector m_vSmokeColor; // 0xa94            
            VectorWS m_vSmokeDetonationPos; // 0xaa0            
            uint8_t _pad0aac[0x4]; // 0xaac
            // m_VoxelFrameData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint8_t> m_VoxelFrameData;
            char m_VoxelFrameData[0x18]; // 0xab0            
            std::int32_t m_nVoxelFrameDataSize; // 0xac8            
            std::int32_t m_nVoxelUpdate; // 0xacc            
            source2sdk::entity2::GameTime_t m_flLastBounce; // 0xad0            
            source2sdk::entity2::GameTime_t m_fllastSimulationTime; // 0xad4            
            uint8_t _pad0ad8[0x2280]; // 0xad8
            bool m_bExplodeFromInferno; // 0x2d58            
            bool m_bDidGroundScorch; // 0x2d59            
            uint8_t _pad2d5a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmokeGrenadeProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSmokeGrenadeProjectile) == 0x2d60);
    };
};
