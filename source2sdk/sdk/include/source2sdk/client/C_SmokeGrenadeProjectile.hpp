#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseCSGrenadeProjectile.hpp"

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
        // Size: 0x1418
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_SmokeGrenadeProjectile : public source2sdk::client::C_BaseCSGrenadeProjectile
        {
        public:
            uint8_t _pad1260[0x18]; // 0x1260
            std::int32_t m_nSmokeEffectTickBegin; // 0x1278            
            bool m_bDidSmokeEffect; // 0x127c            
            uint8_t _pad127d[0x3]; // 0x127d
            std::int32_t m_nRandomSeed; // 0x1280            
            Vector m_vSmokeColor; // 0x1284            
            VectorWS m_vSmokeDetonationPos; // 0x1290            
            uint8_t _pad129c[0x4]; // 0x129c
            // m_VoxelFrameData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint8_t> m_VoxelFrameData;
            char m_VoxelFrameData[0x18]; // 0x12a0            
            std::int32_t m_nVoxelFrameDataSize; // 0x12b8            
            std::int32_t m_nVoxelUpdate; // 0x12bc            
            bool m_bSmokeVolumeDataReceived; // 0x12c0            
            bool m_bSmokeEffectSpawned; // 0x12c1            
            uint8_t _pad12c2[0x156];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SmokeGrenadeProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SmokeGrenadeProjectile) == 0x1418);
    };
};
