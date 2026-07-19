#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x580
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CEnvCubemap : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad0498[0x80]; // 0x498
            // m_Entity_hCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hCubemapTexture;
            char m_Entity_hCubemapTexture[0x8]; // 0x518            
            bool m_Entity_bCustomCubemapTexture; // 0x520            
            uint8_t _pad0521[0x3]; // 0x521
            float m_Entity_flInfluenceRadius; // 0x524            
            Vector m_Entity_vBoxProjectMins; // 0x528            
            Vector m_Entity_vBoxProjectMaxs; // 0x534            
            bool m_Entity_bMoveable; // 0x540            
            uint8_t _pad0541[0x3]; // 0x541
            std::int32_t m_Entity_nHandshake; // 0x544            
            std::int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x548            
            std::int32_t m_Entity_nPriority; // 0x54c            
            float m_Entity_flEdgeFadeDist; // 0x550            
            Vector m_Entity_vEdgeFadeDists; // 0x554            
            float m_Entity_flDiffuseScale; // 0x560            
            bool m_Entity_bStartDisabled; // 0x564            
            bool m_Entity_bDefaultEnvMap; // 0x565            
            bool m_Entity_bDefaultSpecEnvMap; // 0x566            
            bool m_Entity_bIndoorCubeMap; // 0x567            
            bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x568            
            uint8_t _pad0569[0xf]; // 0x569
            bool m_Entity_bEnabled; // 0x578            
            uint8_t _pad0579[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvCubemap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvCubemap) == 0x580);
    };
};
