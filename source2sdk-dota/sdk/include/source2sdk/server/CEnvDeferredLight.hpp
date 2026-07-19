#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CModelPointEntity.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9a8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvDeferredLight : public source2sdk::server::CModelPointEntity
        {
        public:
            // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEntity;
            char m_hTargetEntity[0x4]; // 0x778            
            Color m_LightColor; // 0x77c            
            float m_flIntensity; // 0x780            
            float m_flLightSize; // 0x784            
            float m_flSpotFoV; // 0x788            
            QAngle m_vLightDirection; // 0x78c            
            float m_flStartFalloff; // 0x798            
            float m_flDistanceFalloff; // 0x79c            
            std::uint32_t m_nFlags; // 0x7a0            
            char m_ProjectedTextureName[512]; // 0x7a4            
            uint8_t _pad09a4[0x4];
            
            // Datamap fields:
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // Color InputSetLightColor; // 0x0
            // float InputSetLightIntensity; // 0x0
            // float InputSetLightRadius; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvDeferredLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvDeferredLight) == 0x9a8);
    };
};
