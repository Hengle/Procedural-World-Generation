// Fill out your copyright notice in the Description page of Project Settings.

#include "MeshCreatorUtilities.h"
#include "MeshData.h"

void MeshCreatorUtilities::FaceUp(MeshData* meshData, FVector origin)
{
	TArray<FVector> vertices;
	vertices.Add(FVector(origin.X + 50, origin.Y - 50, origin.Z + 50));
	vertices.Add(FVector(origin.X + 50, origin.Y + 50, origin.Z + 50));
	vertices.Add(FVector(origin.X - 50, origin.Y + 50, origin.Z + 50));
	vertices.Add(FVector(origin.X - 50, origin.Y - 50, origin.Z + 50));

	meshData->mVertices.Append(vertices);

	AddTrianglesAndUVs(meshData);
}

void MeshCreatorUtilities::FaceDown(MeshData* meshData, FVector origin)
{
	TArray<FVector> vertices;
	vertices.Add(FVector(origin.X - 50, origin.Y - 50, origin.Z - 50));
	vertices.Add(FVector(origin.X - 50, origin.Y + 50, origin.Z - 50));
	vertices.Add(FVector(origin.X + 50, origin.Y + 50, origin.Z - 50));
	vertices.Add(FVector(origin.X + 50, origin.Y - 50, origin.Z - 50));

	meshData->mVertices.Append(vertices);

	AddTrianglesAndUVs(meshData);
}

void MeshCreatorUtilities::FaceNorth(MeshData* meshData, FVector origin)
{
	TArray<FVector> vertices;
	vertices.Add(FVector(origin.X + 50, origin.Y + 50, origin.Z - 50));
	vertices.Add(FVector(origin.X + 50, origin.Y + 50, origin.Z + 50));
	vertices.Add(FVector(origin.X + 50, origin.Y - 50, origin.Z + 50));
	vertices.Add(FVector(origin.X + 50, origin.Y - 50, origin.Z - 50));

	meshData->mVertices.Append(vertices);

	AddTrianglesAndUVs(meshData);
}

void MeshCreatorUtilities::FaceEast(MeshData* meshData, FVector origin)
{
	TArray<FVector> vertices;
	vertices.Add(FVector(origin.X - 50, origin.Y + 50, origin.Z - 50));
	vertices.Add(FVector(origin.X - 50, origin.Y + 50, origin.Z + 50));
	vertices.Add(FVector(origin.X + 50, origin.Y + 50, origin.Z + 50));
	vertices.Add(FVector(origin.X + 50, origin.Y + 50, origin.Z - 50));

	meshData->mVertices.Append(vertices);

	AddTrianglesAndUVs(meshData);
}

void MeshCreatorUtilities::FaceWest(MeshData* meshData, FVector origin)
{
	TArray<FVector> vertices;
	vertices.Add(FVector(origin.X + 50, origin.Y - 50, origin.Z - 50));
	vertices.Add(FVector(origin.X + 50, origin.Y - 50, origin.Z + 50));
	vertices.Add(FVector(origin.X - 50, origin.Y - 50, origin.Z + 50));
	vertices.Add(FVector(origin.X - 50, origin.Y - 50, origin.Z - 50));

	meshData->mVertices.Append(vertices);

	AddTrianglesAndUVs(meshData);
}

void MeshCreatorUtilities::FaceSouth(MeshData* meshData, FVector origin)
{
	TArray<FVector> vertices;
	vertices.Add(FVector(origin.X - 50, origin.Y - 50, origin.Z - 50));
	vertices.Add(FVector(origin.X - 50, origin.Y - 50, origin.Z + 50));
	vertices.Add(FVector(origin.X - 50, origin.Y + 50, origin.Z + 50));
	vertices.Add(FVector(origin.X - 50, origin.Y + 50, origin.Z - 50));

	meshData->mVertices.Append(vertices);

	AddTrianglesAndUVs(meshData);
}

void MeshCreatorUtilities::AddTrianglesAndUVs(MeshData* meshData)
{
	TArray<int32> triangles;
	triangles.Add(meshData->mVertices.Num() - 2);
	triangles.Add(meshData->mVertices.Num() - 3);
	triangles.Add(meshData->mVertices.Num() - 4);

	triangles.Add(meshData->mVertices.Num() - 1);
	triangles.Add(meshData->mVertices.Num() - 2);
	triangles.Add(meshData->mVertices.Num() - 4);

	meshData->mTriangles.Append(triangles);

	AddUVs(meshData);
}

void MeshCreatorUtilities::AddUVs(MeshData* meshData)
{
	TArray<FVector2D> uv;
	uv.Add(FVector2D(0, 0));
	uv.Add(FVector2D(0, 1));
	uv.Add(FVector2D(1, 1));
	uv.Add(FVector2D(1, 0));

	meshData->mUV.Append(uv);
}

